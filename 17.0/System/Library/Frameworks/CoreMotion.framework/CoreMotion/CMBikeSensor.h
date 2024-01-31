@class CMBikeSensorInternal;

@interface CMBikeSensor : NSObject

@property (readonly, nonatomic) CMBikeSensorInternal *_internal;

+ (BOOL)isAvailable;

- (id)init;
- (void)dealloc;
- (void)feedBikeSensorData:(id)a0;

@end
