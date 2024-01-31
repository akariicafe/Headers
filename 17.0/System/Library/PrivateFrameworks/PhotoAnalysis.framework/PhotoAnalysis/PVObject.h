@class NSString;

@interface PVObject : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSString *localIdentifier;

- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithLocalIdentifier:(id)a0;

@end
