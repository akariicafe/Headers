@class NSDictionary, NSString, TBLocationFetchRequestDescriptor;

@interface TBLocationFetchRequest : NSObject <TBFetchRequest, NSCopying>

@property (retain, nonatomic) TBLocationFetchRequestDescriptor *descriptor;
@property (nonatomic) BOOL cacheable;
@property (nonatomic) unsigned long long sourcePolicy;
@property (copy, nonatomic) id /* block */ resultsHandler;
@property (copy, nonatomic) id /* block */ preferLocalHandler;
@property (retain, nonatomic) NSDictionary *userInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)fetchRequestWithDescriptor:(id)a0 sourcePolicy:(unsigned long long)a1;
+ (id)fetchRequestWithDescriptor:(id)a0 sourcePolicy:(unsigned long long)a1 cacheable:(BOOL)a2;

- (void)handleResponse:(id)a0;
- (void)handlePreferLocalResponse:(id)a0;
- (void).cxx_destruct;
- (id)initWithDescriptor:(id)a0 sourcePolicy:(unsigned long long)a1 cacheable:(BOOL)a2;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
