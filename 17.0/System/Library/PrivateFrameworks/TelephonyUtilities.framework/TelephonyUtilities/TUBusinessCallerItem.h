@class NSString, NSURL;

@interface TUBusinessCallerItem : NSObject <TUBusinessCallerItem>

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *department;
@property (readonly, copy, nonatomic) NSURL *logoURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithName:(id)a0 department:(id)a1 logoURL:(id)a2;
- (BOOL)isEqualToCallerItem:(id)a0;

@end
