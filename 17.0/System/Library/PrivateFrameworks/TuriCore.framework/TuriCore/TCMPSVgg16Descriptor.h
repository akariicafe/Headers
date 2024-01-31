@class TCMPSVgg16Block2Descriptor, TCMPSVgg16Block1Descriptor;

@interface TCMPSVgg16Descriptor : NSObject

@property (retain, nonatomic) TCMPSVgg16Block1Descriptor *block1;
@property (retain, nonatomic) TCMPSVgg16Block1Descriptor *block2;
@property (retain, nonatomic) TCMPSVgg16Block2Descriptor *block3;
@property (retain, nonatomic) TCMPSVgg16Block2Descriptor *block4;

- (id)init;
- (void).cxx_destruct;

@end
