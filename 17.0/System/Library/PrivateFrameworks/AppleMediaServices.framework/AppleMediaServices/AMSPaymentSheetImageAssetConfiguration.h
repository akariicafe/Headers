@class NSString;

@interface AMSPaymentSheetImageAssetConfiguration : NSObject <AMSPaymentSheetAssetConfiguration>

@property (readonly, copy, nonatomic) NSString *filename;
@property (readonly, nonatomic) NSString *fileExtension;
@property (readonly, nonatomic) struct CGSize { double width; double height; } size;
@property (readonly, nonatomic) long long type;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithFilename:(id)a0 size:(struct CGSize { double x0; double x1; })a1 type:(long long)a2;

@end
