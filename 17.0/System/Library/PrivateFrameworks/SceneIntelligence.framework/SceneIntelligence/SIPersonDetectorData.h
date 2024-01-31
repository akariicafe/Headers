@class NSString, NSMutableArray;

@interface SIPersonDetectorData : SIOutputData <SIData>

@property (retain, nonatomic) NSMutableArray *boundingBoxes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)initWithConfig:(id)a0;
- (void).cxx_destruct;

@end
