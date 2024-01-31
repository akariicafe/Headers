@class NSURL, NSString, NSDictionary;

@interface MICandidateContainer : NSObject <NSCopying>

@property (readonly, nonatomic) NSURL *rootURL;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSDictionary *metadata;
@property (readonly, nonatomic) long long estimatedSize;
@property (readonly, nonatomic) BOOL isAppleApp;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithContainerURL:(id)a0 identifier:(id)a1 metadata:(id)a2;

@end
