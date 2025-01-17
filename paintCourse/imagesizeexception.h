#ifndef IMAGESIZEEXCEPTION_H
#define IMAGESIZEEXCEPTION_H

#include <stdexcept>

namespace Draw
{

class ImageSizeException : public std::domain_error
{
public:
    explicit ImageSizeException(const char* message);
    ~ImageSizeException();
};

} // namespace Draw

#endif // IMAGESIZEEXCEPTION_H
