#include <opencv2/opencv.hpp>
#include <iostream>
// #include <opencv2/core/core.hpp>
// #include <opencv2/highgui/highgui.hpp>

int main(int argc, char *argv[])
{
  cv::VideoCapture cap(0);

  if(!cap.isOpened())
  {
    std::cout << "Video open failed." << std::endl;

    return -1;
  }

  cv::Mat frame;
  while(cap.read(frame))
  {
    cv::imshow("window", frame);
    const int key = cv::waitKey(1);
    if(key == 'q')
    {
      std::cout << "quit" << std::endl;
      break;
    }
    else if (key == 's')
    {
      std::string filename = "img.png";
      cv::imwrite(filename, frame);
      std::cout << "Image saved to '" << filename << "'." << std::endl;
    }
  }
  cv::destroyAllWindows();
  return 0;
}