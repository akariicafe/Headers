@class NSUUID, NSString;
@protocol SHMatcher, SHMatcherDelegate;

@interface SHManagedSessionCustomCatalogMatcher : NSObject <SHMatcherDelegate, SHMatcher>

@property (readonly, nonatomic) id<SHMatcher> customCatalogMatcher;
@property (readonly, nonatomic) NSUUID *currentRequestID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<SHMatcherDelegate> delegate;

- (void).cxx_destruct;
- (void)stopRecognition;
- (id)initWithCustomCatalog:(id)a0;
- (void)matcher:(id)a0 didProduceResponse:(id)a1;
- (void)startRecognitionForRequest:(id)a0;
- (void)stopRecognitionForRequestID:(id)a0;

@end
