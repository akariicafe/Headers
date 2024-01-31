@class NSString, DAMessageMoveRequest;

@interface DAMoveResponse : NSObject

@property (nonatomic) int status;
@property (copy, nonatomic) NSString *sourceID;
@property (copy, nonatomic) NSString *destID;
@property (retain, nonatomic) DAMessageMoveRequest *origRequest;

- (id)description;
- (void).cxx_destruct;
- (id)initWithStatus:(int)a0 sourceID:(id)a1 destID:(id)a2;

@end
