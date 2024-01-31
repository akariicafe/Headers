@class NSString, CUIRenditionKey, NSDate, NSObject;
@protocol TDCustomAssetSource;

@interface TDCustomAssetImportInfo : NSObject

@property (copy, nonatomic) CUIRenditionKey *renditionKey;
@property (copy, nonatomic) NSString *elementName;
@property (copy, nonatomic) NSString *partName;
@property (retain) NSObject<TDCustomAssetSource> *customAsset;
@property (copy, nonatomic) NSDate *modificationDate;
@property (nonatomic) struct { double top; double left; double bottom; double right; } sliceInsets;
@property (nonatomic) long long renditionType;
@property (nonatomic) long long resizingMode;
@property (nonatomic) struct CGSize { double width; double height; } resizableSliceSize;
@property (nonatomic) BOOL isTemplate;
@property (nonatomic) long long templateRenderingMode;
@property (nonatomic) BOOL optOutOfThinning;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } alignmentRect;
@property (copy, nonatomic) NSString *name;

- (void)dealloc;
- (long long)renditionSubtype;

@end
