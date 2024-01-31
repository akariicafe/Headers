@class NSString, NSURL, NSObject;

@interface BCSLinkItemIdentifier : NSObject <BCSItemIdentifying> {
    NSString *_fullHash;
    NSURL *_url;
    long long _truncatedDomainHash;
    long long _computedTruncatedHash;
}

@property (readonly, nonatomic) NSObject *itemIdentifier;
@property (readonly, nonatomic) long long truncatedHash;
@property (readonly, nonatomic) long long type;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
