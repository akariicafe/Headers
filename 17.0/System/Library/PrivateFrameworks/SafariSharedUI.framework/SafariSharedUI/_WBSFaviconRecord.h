@class NSURL, NSData;

@interface _WBSFaviconRecord : NSObject

@property (readonly, nonatomic) NSURL *pageURL;
@property (readonly, nonatomic) NSURL *originalPageURL;
@property (readonly, nonatomic) NSURL *iconURL;
@property (readonly, copy, nonatomic) NSData *iconData;
@property (readonly, nonatomic) struct CGSize { double width; double height; } size;
@property (readonly, nonatomic) BOOL isPrivate;

+ (id)new;

- (id)init;
- (void).cxx_destruct;
- (id)initWithPageURL:(id)a0 originalPageURL:(id)a1 iconURL:(id)a2 iconData:(id)a3 size:(struct CGSize { double x0; double x1; })a4 isPrivate:(BOOL)a5;

@end
