@class NSMutableArray, PKPassFieldTemplate;

@interface PKPassBucketTemplate : NSObject

@property (retain, nonatomic) NSMutableArray *fieldTemplates;
@property (nonatomic) long long bucketAlignment;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } bucketRect;
@property (nonatomic) double minFieldPadding;
@property (retain, nonatomic) PKPassFieldTemplate *defaultFieldTemplate;
@property (nonatomic) unsigned long long maxFields;
@property (nonatomic) BOOL sitsOnStripImage;

- (void).cxx_destruct;
- (void)addFieldTemplate:(id)a0;
- (id)templateForFieldAtIndex:(unsigned long long)a0;

@end
