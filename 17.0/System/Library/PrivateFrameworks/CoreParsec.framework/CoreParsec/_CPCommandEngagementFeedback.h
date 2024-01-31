@class NSString, _CPSearchResultForFeedback, NSData;

@interface _CPCommandEngagementFeedback : PBCodable <_CPProcessableFeedback, _CPCommandEngagementFeedback, NSSecureCoding> {
    unsigned long long _timestamp;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long timestamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) int commandType;
@property (copy, nonatomic) NSString *commandDetail;
@property (nonatomic) unsigned long long uniqueButtonId;
@property (copy, nonatomic) NSString *cardSectionId;
@property (retain, nonatomic) _CPSearchResultForFeedback *result;
@property (nonatomic) unsigned long long timestamp;
@property (copy, nonatomic) NSString *resultSectionId;
@property (nonatomic) int triggerEvent;
@property (nonatomic) int contactActionType;
@property (nonatomic) BOOL didDisplayHandleOptions;
@property (nonatomic) BOOL didSelectFromOptionsMenu;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (id)initWithFacade:(id)a0;
- (id)init;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
