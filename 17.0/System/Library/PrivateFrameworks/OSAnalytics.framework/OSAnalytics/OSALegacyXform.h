@class NSMutableDictionary;

@interface OSALegacyXform : NSObject {
    NSMutableDictionary *_templates;
}

+ (id)rollSchemaForward:(id)a0;
+ (id)transformURL:(id)a0 options:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (id)formatLastException:(id)a0 withImages:(id)a1;
- (id)_getValueForKey:(id)a0 fromBody:(id)a1 orHeader:(id)a2;
- (id)_hexDump:(id)a0 offset:(int)a1 indicator:(BOOL)a2;
- (id)formatArm32ThreadState:(id)a0 index:(int)a1;
- (id)formatArm64ThreadState:(id)a0 index:(int)a1;
- (id)formatCallstacks:(id)a0 withImages:(id)a1 macosStyle:(BOOL)a2;
- (id)formatFrame:(id)a0 withImages:(id)a1 macosStyle:(BOOL)a2;
- (id)formatImages:(id)a0 macosStyle:(BOOL)a1;
- (id)formatInstructionState:(id)a0 index:(int)a1;
- (id)formatLastBranchState:(id)a0 index:(int)a1 withImages:(id)a2;
- (id)formatX86ThreadState:(id)a0 index:(int)a1;
- (BOOL)prepareTemplate:(id)a0 forLogType:(id)a1 error:(id *)a2;
- (BOOL)transformJSON:(id)a0 header:(id)a1 error:(id *)a2 streamingBlock:(id /* block */)a3;
- (BOOL)transformLines:(id)a0 withDefinitions:(id)a1 body:(id)a2 header:(id)a3 error:(id *)a4 streamingBlock:(id /* block */)a5;

@end
