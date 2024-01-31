@class NSNumber;

@interface NTKWidgetComplicationMigrationKey : NSObject <NSCopying>

@property (nonatomic) unsigned long long complicationType;
@property (nonatomic) NSNumber *family;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithComplicationType:(unsigned long long)a0 family:(id)a1;

@end
