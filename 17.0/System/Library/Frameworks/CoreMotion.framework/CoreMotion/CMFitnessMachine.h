@class CMFitnessMachineInternal;

@interface CMFitnessMachine : NSObject

@property (readonly, nonatomic) CMFitnessMachineInternal *_internal;

+ (BOOL)isAvailable;

- (id)init;
- (void)dealloc;
- (void)feedFitnessMachineData:(id)a0;

@end
