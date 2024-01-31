@class NSString, NSNumber;

@interface ICASPdfCollabIxData : NSObject <AADataEventType>

@property (class, readonly, copy, nonatomic) NSString *dataName;

@property (readonly, nonatomic) NSNumber *hasCollabView;
@property (readonly, nonatomic) NSNumber *hasCollabEdit;

- (void).cxx_destruct;
- (id)toDict;
- (id)initWithHasCollabView:(id)a0 hasCollabEdit:(id)a1;

@end
