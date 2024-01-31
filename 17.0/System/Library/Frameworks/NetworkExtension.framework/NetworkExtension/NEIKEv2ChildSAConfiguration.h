@class NSArray;

@interface NEIKEv2ChildSAConfiguration : NSObject <NEPrettyDescription, NSCopying> {
    NSArray *_proposals;
}

@property unsigned long long mode;
@property unsigned int replayWindowSize;
@property BOOL sequencePerTrafficClass;
@property BOOL preferInitiatorProposalOrder;
@property (retain, nonatomic) NSArray *proposals;
@property (retain) NSArray *localTrafficSelectors;
@property (retain) NSArray *remoteTrafficSelectors;

- (id)init;
- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
