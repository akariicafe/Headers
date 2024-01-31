@class NSURL, NSError, NSString;

@interface CMSContentFailure : NSObject <CMSCoding>

@property (retain, nonatomic) NSURL *URL;
@property (retain, nonatomic) NSError *error;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithError:(id)a0;
- (void).cxx_destruct;
- (id)cmsCoded;
- (id)initWithError:(id)a0 url:(id)a1;
- (id)initWithServiceError:(id)a0 url:(id)a1;

@end
