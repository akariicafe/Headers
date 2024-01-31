@class NSString;

@interface BLTImageAttachmentInfo : NSObject

@property (retain, nonatomic) NSString *contentType;
@property (nonatomic) struct CGSize { double width; double height; } size;

+ (id)imageAttachmentInfoForImageURL:(id)a0;

- (void).cxx_destruct;

@end
