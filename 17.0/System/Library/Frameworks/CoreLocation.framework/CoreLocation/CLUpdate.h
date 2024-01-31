@class CLLocation;

@interface CLUpdate : NSObject

@property (readonly) BOOL isStationary;
@property (readonly, nonatomic) CLLocation *location;

- (void)dealloc;
- (id)initWithLocation:(id)a0 isStationary:(unsigned char)a1;

@end
