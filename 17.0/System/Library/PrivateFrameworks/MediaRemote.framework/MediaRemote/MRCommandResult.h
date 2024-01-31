@class NSArray, NSString, MRPlayerPath, NSError;

@interface MRCommandResult : NSObject <NSCopying>

@property (copy, nonatomic) NSArray *resultStatuses;
@property (nonatomic) unsigned int sendError;
@property (copy, nonatomic) NSError *error;
@property (retain, nonatomic) NSString *sendErrorDescription;
@property (copy, nonatomic) MRPlayerPath *playerPath;
@property (nonatomic) unsigned int startQOS;
@property (nonatomic) unsigned int endQOS;
@property (readonly, copy, nonatomic) NSArray *handlerReturnStatuses;

+ (id)commandResultWithSendError:(unsigned int)a0;
+ (id)commandResultWithSendError:(unsigned int)a0 description:(id)a1;

- (id)initWithError:(id)a0;
- (id)initWithData:(id)a0;
- (id)data;
- (id)description;
- (id)protobuf;
- (void).cxx_destruct;
- (id)initWithProtobuf:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithPlayerPath:(id)a0;
- (id)initWithHandlerStatuses:(id)a0 sendError:(unsigned int)a1;
- (id)initWithResultStatuses:(id)a0 sendError:(unsigned int)a1 playerPath:(id)a2;
- (id)initWithWithSendError:(unsigned int)a0 description:(id)a1;

@end
