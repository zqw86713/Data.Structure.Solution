// func7-6.cpp 包括顶点信息类型的定义及对它的操作
#define MAX_NAME 9
struct VertexType
{ char	name[MAX_NAME];
  int	ve, vl; };

void Visit(VertexType ver)
{
	printf("%s ", ver.name);
}

void Input(VertexType &ver)
{
	scanf("%s", ver.name);
}

void Visitel(VertexType ver)
{
	printf("%3d%3d", ver.ve, ver.vl);
}

void InputFromFile(FILE *f, VertexType &ver)
{
	fscanf(f, "%s", ver.name);
}
