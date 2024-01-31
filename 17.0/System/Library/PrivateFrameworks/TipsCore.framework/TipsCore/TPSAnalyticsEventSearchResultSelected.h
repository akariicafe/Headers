@class NSString;

@interface TPSAnalyticsEventSearchResultSelected : TPSAnalyticsEvent

@property (copy, nonatomic) NSString *searchID;
@property (copy, nonatomic) NSString *searchTerm;
@property (copy, nonatomic) NSString *tipID;
@property (copy, nonatomic) NSString *collectionID;
@property (copy, nonatomic) NSString *correlationID;

+ (BOOL)supportsSecureCoding;
+ (id)eventWithSearchID:(id)a0 searchTerm:(id)a1 tipID:(id)a2 collectionID:(id)a3 correlationID:(id)a4;

- (id)eventName;
- (id)mutableAnalyticsEventRepresentation;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)_initWithSearchID:(id)a0 searchTerm:(id)a1 tipID:(id)a2 collectionID:(id)a3 correlationID:(id)a4;

@end
