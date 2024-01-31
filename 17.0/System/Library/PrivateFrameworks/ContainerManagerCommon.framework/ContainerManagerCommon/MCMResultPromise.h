@class NSString;
@protocol MCMResult;

@interface MCMResultPromise : NSObject <MCMResultPromise>

@property (readonly, nonatomic) id /* block */ completion;
@property (readonly, nonatomic) id<MCMResult> result;
@property (readonly, nonatomic) BOOL complete;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
