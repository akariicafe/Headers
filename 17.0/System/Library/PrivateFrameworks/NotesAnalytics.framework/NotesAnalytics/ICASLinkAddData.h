@class NSString, ICASLinkContentType, ICASLinkAddApproach, NSNumber;

@interface ICASLinkAddData : NSObject <AADataEventType>

@property (class, readonly, copy, nonatomic) NSString *dataName;

@property (readonly, nonatomic) ICASLinkAddApproach *linkAddApproach;
@property (readonly, nonatomic) ICASLinkContentType *linkContentType;
@property (readonly, nonatomic) NSNumber *isTokenizedLink;

- (void).cxx_destruct;
- (id)toDict;
- (id)initWithLinkAddApproach:(id)a0 linkContentType:(id)a1 isTokenizedLink:(id)a2;

@end
