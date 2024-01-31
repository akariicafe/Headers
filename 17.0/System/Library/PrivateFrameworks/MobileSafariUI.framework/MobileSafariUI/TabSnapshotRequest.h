@protocol NSObject, NSCopying;

@interface TabSnapshotRequest : NSObject

@property (readonly, nonatomic) struct CGSize { double width; double height; } size;
@property (readonly, nonatomic) double topBackdropHeight;
@property (readonly, nonatomic) unsigned long long options;
@property (readonly, copy, nonatomic) id<NSObject, NSCopying> identifier;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithSize:(struct CGSize { double x0; double x1; })a0 topBackdropHeight:(double)a1 options:(unsigned long long)a2;
- (id)initWithSize:(struct CGSize { double x0; double x1; })a0 topBackdropHeight:(double)a1 options:(unsigned long long)a2 identifier:(id)a3;

@end
