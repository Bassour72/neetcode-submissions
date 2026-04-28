class Solution 
{
    static void floodFill(std::vector<std::vector<int> > & image, int sr, int sc, int color, int t) 
    {
        if (image.size() <= sr || image[sr].size() <= sc  || sr < 0 || sc < 0 || image[sr][sc] != t)
            return ;
          if (image[sr][sc] == color )
            return ;
        image[sr][sc] = color;
        floodFill(image, sr, sc + 1, color, t);
        floodFill(image, sr, sc -1 , color, t); 
        floodFill(image, sr + 1, sc, color, t); 
        floodFill(image, sr - 1, sc, color, t); 
    }
public:
    static std::vector<std::vector<int> > floodFill(std::vector<std::vector<int> >& image, int sr, int sc, int color) 
    {
        floodFill(image, sr, sc, color,image[sr][sc]);
       return (image);
    }
};