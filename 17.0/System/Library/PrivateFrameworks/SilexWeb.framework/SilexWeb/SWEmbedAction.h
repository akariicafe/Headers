@class NSDictionary, NSString;

@interface SWEmbedAction : NSObject <SWEmbedAction>

@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) NSDictionary *info;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)perform;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)canHandle;
- (id)initWithType:(unsigned long long)a0 info:(id)a1;

@end
