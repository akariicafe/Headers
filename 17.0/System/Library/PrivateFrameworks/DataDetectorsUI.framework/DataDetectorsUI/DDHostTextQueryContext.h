@class NSString;

@interface DDHostTextQueryContext : NSObject <RVTextQueryProtocol>

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSString *userAgent;
@property (nonatomic) long long queryID;
@property (retain, nonatomic) NSString *queryString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
