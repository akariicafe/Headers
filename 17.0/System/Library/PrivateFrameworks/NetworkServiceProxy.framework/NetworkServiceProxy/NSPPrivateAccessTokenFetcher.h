@class NSString, NSData, NSMutableArray;

@interface NSPPrivateAccessTokenFetcher : NSObject {
    NSData *_challengeData;
    NSData *_tokenKey;
    NSData *_originNameKey;
    NSMutableArray *_secondaryFetchers;
}

@property (retain) NSString *selectedOrigin;
@property struct { unsigned int val[8]; } auditToken;
@property (retain) NSString *bundleID;

+ (BOOL)checkOriginAllowedAsThirdParty:(id)a0;

- (void).cxx_destruct;
- (void)addSecondaryChallenge:(id)a0 tokenKey:(id)a1 originNameKey:(id)a2;
- (void)fetchTokenWithQueue:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithChallenge:(id)a0 tokenKey:(id)a1 originNameKey:(id)a2;
- (id)initWithChallenge:(id)a0 tokenPublicKey:(id)a1 issuerPublicKey:(id)a2;

@end
