@class NSString, NSArray, NSError;

@interface MGRemoteQueryReply : NSObject <MGRemoteQueryDecodable>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSArray *groups;
@property (readonly, copy, nonatomic) NSError *error;

+ (id)replyWithError:(id)a0;
+ (id)replyWithGroups:(id)a0;
+ (id)rq_instanceFromCoded:(id)a0;

@end
