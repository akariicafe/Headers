@class NSString, NSAttributedString, NSArray;

@interface BlastDoorSMSCTPartSMIL : NSObject {
    void /* unknown type, empty encoding */ sMSCTPartSMIL;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSAttributedString *contentBody;
@property (nonatomic, readonly) NSArray *orderedParts;

- (id)init;
- (void).cxx_destruct;

@end
