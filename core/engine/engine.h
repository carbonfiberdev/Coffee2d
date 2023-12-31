#include <vector>
#include <./glad/glad.h>

using namespace std;

class Engine
{
public:
	void AddVertexToPool(vector<float>&);
	void ChangeVertices(vector<float>&);
	void AddVertexCountToPool(int);
	void IncreaseTriangleCount();
	void Update();
	void Draw(GLuint&, GLuint&);
	
	vector<float> GetVertexFromPool();
	int GetVertexCountFromPool();
private:
	int vertex_count;
	int triangle_count;
	vector<float> vertex;
	
	GLuint VBO;
	GLuint VAO;
};