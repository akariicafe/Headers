@class NSObject;

@interface _UIDocumentPickerContainerItemThumbnailKey : NSObject

@property (readonly, nonatomic) NSObject *primaryKey;
@property (readonly, nonatomic) struct CGSize { double width; double height; } size;
@property (readonly, nonatomic) double scale;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithPrimaryKey:(id)a0 size:(struct CGSize { double x0; double x1; })a1 scale:(double)a2;

@end
