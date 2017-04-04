#include<stdio.h>
#include<stdlib.h>
#define max 20
//Declare new type of vertex of graph structure.
typedef struct graph
{
//Data of vertex.
  char vertex;
//Pointer of next vertex.
  struct graph *link;
}
graph;
//Declare twenty head array of vertex.
graph head[max];
//Declare twenty save array of record visited.
short visited[max];
//Declare create graph register of node recorded.
char node[max][max]={0};
/************************************************************/
/******Function that add vertex adjacency lists of graph*****/ 
/************************************************************/
void connect_graph_node(short from,short to)
{
//Declare new vertex pointer.
  graph *newnode,*pointer;
//Dispose memory space.
  newnode=(graph*)malloc(sizeof(graph));
//Create content of vertex.
  newnode->vertex=to;
//Set pointer initial value.
  newnode->link=NULL;
//Let pointer point position of vertex.
  pointer=&(head[from]);
//Vertex visited whether reach rear of list or not.
  while(pointer->link)
  {
//If no, point next list.
    pointer=pointer->link;
  }
//If yes, let newnode insert rear list.
  pointer->link=newnode;
}
/************************************************************/
/********Function that start to create a random graph********/
/************************************************************/
void created_random_graph(void)
{
//Declare i point vertex, repeat is let i run two times, j point random vertex,
//x use to loop that let element generated move to the last element, find record vertex corresponding.
  short i,repeat,j,x,find;
//Every vertex run two times.
  for(i=0;i<max;i++)
  {
    for(repeat=0;repeat<2;repeat++)
    {
      do
      {
        j=rand()%max;
      }
      while((i==j)||(node[i][j]==1));
      node[i][j]=1;
      node[j][i]=1;
//Start to create graph by connect vertex node.
      connect_graph_node(i,j);
//Connect vertex must be two-way, because one edge can connect two vertex.
      connect_graph_node(j,i);
//Then let magnitude element generated move to the last element.
    }
  }
}
/****************************************/
/****Function that depth first search****/
/****************************************/
void dfs(short now)
{
//Declare new vertex pointer.
  graph *pointer;
//Record vertex visited.
  visited[now]=1;
//Print out vertex vedited.
  printf("%2d",now);
//Let pointer point position of vertex.
  pointer=head[now].link;
//Whether visit to rear of list or not.
  while(pointer)
  {
//If there are vertex have not visited.
    if(!visited[pointer->vertex])
    {
//Print out connected dash.
      printf(" - ");
//Visit else vertex by recursive.
      dfs(pointer->vertex);
    }
//Pointer point next node.
    pointer=pointer->link;
  }
}
/****************************************/
/**************Main program**************/
/****************************************/
int main(void)
{
  printf("\n---------------°ÌThis program is-°π-B9502028-°π-≥Ø∑qµæ-create°Ì---------------\n\n");
//Declare new vertex pointer.
  graph *pointer;
//Declare loop control i.
  int i;
//Srand randomized with time.
  srand((unsigned)time(NULL));
  for(i=0;i<max;i++)
  {
//Set vertex value.
    head[i].vertex=i;
//Clear graph pointer.
    head[i].link=NULL;
//Set visited array initial value.
    visited[i]=0;
  }
//Create a graph.
  created_random_graph();
  printf("Content of adjacency lists of graph:\n");
  for(i=0;i<max;i++)
  {
//Print out magnitude of vertex.
    printf("Vertex %2d : ",head[i].vertex);
//Point position of vertex.
    pointer=head[i].link;
//Whether visit to rear of list or not.
    while(pointer)
    {
//Print out this content of vertex.
      printf("%2d",pointer->vertex);
//If next pointer is not null.
      if(pointer->link)
      {
//Print out connected dash.
         printf(" -> ");
      }
//Point next vertex.
      pointer=pointer->link;
    }
//Give a paragraph.
    printf("\n");
  }
  printf("\nContent of depth-first search:\n");
//Start to depth-first search.
  dfs(0);
  getch();
  return 0;
}
