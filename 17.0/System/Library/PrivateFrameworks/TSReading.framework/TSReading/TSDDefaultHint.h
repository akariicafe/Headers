@class NSString;

@interface TSDDefaultHint : NSObject <TSDHint, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } bounds;
@property (readonly, nonatomic) unsigned long long edges;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)archivedHintClass;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyForArchiving;
- (id)firstChildHint;
- (id)initWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 edges:(unsigned long long)a1;
- (BOOL)isLastPartitionHorizontally:(BOOL)a0;
- (id)lastChildHint;
- (void)offsetByDelta:(int)a0;
- (BOOL)overlapsWithSelection:(id)a0;

@end
