@class NSURL, UIImage;

@interface UIActivityItemURLRep : NSObject

@property (retain, nonatomic) NSURL *URL;
@property (retain, nonatomic) UIImage *thumbnail;
@property (nonatomic) long long attachmentURLType;

- (void).cxx_destruct;
- (id)scheme;
- (BOOL)isFileURL;

@end
