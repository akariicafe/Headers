@interface _TtCC24IntelligencePlatformCore15CoordinationXPC6Server : NSObject <GDCoordinationXPCProtocol>

- (id)init;
- (void)graphUpdatedWithSource:(id)a0 completion:(id /* block */)a1;
- (void)sourceUpdatedWithSourceType:(id)a0 sourceIdentifier:(id)a1 completion:(id /* block */)a2;
- (void)streamUpdatedWithStreamName:(id)a0 isDelete:(BOOL)a1 completion:(id /* block */)a2;

@end
