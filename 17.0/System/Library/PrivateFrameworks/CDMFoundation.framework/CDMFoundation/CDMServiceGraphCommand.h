@class CDMDataDispatcherContext;

@interface CDMServiceGraphCommand : CDMBaseCommand <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) CDMDataDispatcherContext *dataDispatcherContext;

+ (id)serviceGraphName;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)loggingRequestID;

@end
