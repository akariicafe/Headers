@interface ASDDSPGraphUtilities : NSObject

+ (struct optional<AudioCapturerOptions> { union { char x0; unsigned long long x1; } x0; BOOL x1; })getCapturerOptions:(long long)a0;
+ (BOOL)startInjectingBoxes:(id)a0 inGraph:(id)a1 error:(id *)a2;
+ (BOOL)startRecordingAllBoxesInGraph:(id)a0 fromStream:(id)a1 toDirectory:(id)a2 withType:(long long)a3 error:(id *)a4;
+ (BOOL)startRecordingBoxes:(id)a0 inGraph:(id)a1 fromStream:(id)a2 toDirectory:(id)a3 withType:(long long)a4 andMode:(long long)a5 error:(id *)a6;
+ (BOOL)startRecordingBoxes:(id)a0 inGraph:(id)a1 fromStream:(id)a2 toDirectory:(id)a3 withType:(long long)a4 error:(id *)a5;
+ (BOOL)startRecordingBoxes:(id)a0 inGraph:(id)a1 toDirectory:(id)a2 error:(id *)a3;
+ (BOOL)startRecordingBoxes:(id)a0 inGraph:(id)a1 toDirectory:(id)a2 withMode:(long long)a3 error:(id *)a4;
+ (BOOL)stopInjectingBoxesInGraph:(id)a0;
+ (BOOL)stopRecordingBoxesInGraph:(id)a0;

@end
