@class NSString, NSDate;

@interface WBSFaviconProviderIconInfo : NSObject

@property (readonly, copy, nonatomic) NSString *pageURLString;
@property (readonly, copy, nonatomic) NSString *iconURLString;
@property (readonly, copy, nonatomic) NSString *UUIDString;
@property (readonly, nonatomic) NSDate *dateAdded;
@property (readonly, nonatomic) struct CGSize { double width; double height; } size;
@property (readonly, nonatomic) BOOL hasGeneratedResolutions;
@property (readonly, nonatomic) BOOL isRejectedResource;

- (id)init;
- (void).cxx_destruct;
- (id)initWithPageURLString:(id)a0 iconURLString:(id)a1 UUIDString:(id)a2 dateAdded:(id)a3 size:(struct CGSize { double x0; double x1; })a4 hasGeneratedResolutions:(BOOL)a5 isRejectedResource:(BOOL)a6;

@end
