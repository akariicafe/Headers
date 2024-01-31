@class SCNNode, NSMutableArray;

@interface AVTMemojiBodyController : NSObject {
    NSMutableArray *_bodyJoints;
    NSMutableArray *_leftHandJoints;
    NSMutableArray *_rightHandJoints;
    SCNNode *_bodyRoot;
    SCNNode *_leftHand;
    SCNNode *_rightHand;
    SCNNode *_leftHandModel;
    SCNNode *_rightHandModel;
    struct { void /* unknown type, empty encoding */ vector; } spine0_originalOrientation;
    struct { void /* unknown type, empty encoding */ vector; } r_shoulderNeutralSrcInv;
    struct { void /* unknown type, empty encoding */ vector; } l_shoulderNeutralSrcInv;
    struct { void /* unknown type, empty encoding */ vector; } r_shoulderNeutralDst;
    struct { void /* unknown type, empty encoding */ vector; } l_shoulderNeutralDst;
}

- (void).cxx_destruct;

@end
