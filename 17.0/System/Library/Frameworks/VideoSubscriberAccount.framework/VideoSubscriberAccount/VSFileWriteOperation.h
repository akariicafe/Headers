@class NSError, VSOptional;

@interface VSFileWriteOperation : VSAsyncOperation

@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) VSOptional *data;
@property (retain, nonatomic) VSOptional *destination;

- (id)init;
- (void)executionDidBegin;
- (void).cxx_destruct;

@end
