@class NSString, BMAccessDescriptor;

@interface _BMAccessAssertionNotApplicable : NSObject <BMAccessAssertion>

@property (readonly, nonatomic) BMAccessDescriptor *descriptor;
@property (readonly, nonatomic) NSString *path;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDescriptor:(id)a0;
- (void).cxx_destruct;

@end
