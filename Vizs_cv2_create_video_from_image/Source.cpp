#include <opencv2/opencv.hpp>
using namespace cv;

int main()
{
	String folder = "d://photoOPENCV//*.bmp";
	std::vector<String> filenames;


	glob(folder, filenames);

	Mat myImage;

	for (size_t i = 0; i < filenames.size(); ++i)
	{
		myImage = imread(filenames[i]);
		imshow("video", myImage);
		int c = cv::waitKey(1);
		waitKey(30);
	}

	return 0;
}