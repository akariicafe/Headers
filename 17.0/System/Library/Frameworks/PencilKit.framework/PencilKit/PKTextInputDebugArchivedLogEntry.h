@class NSDictionary;

@interface PKTextInputDebugArchivedLogEntry : PKTextInputDebugLogEntry {
    NSDictionary *_logDictionary;
}

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (BOOL)_loadInputDrawingFromDictionary:(id)a0 errorMessage:(id *)a1;
- (BOOL)_loadRecognitionResultFromDictionary:(id)a0;
- (BOOL)_loadTargetContentInfoFromDictionary:(id)a0 targets:(id)a1;
- (BOOL)_loadTextInputTargetsFromDictionaries:(id)a0;
- (id)dictionaryRepresentationWithDetailLevel:(long long)a0 targetContentLevel:(long long)a1;
- (id)initWithRecordingLogEntry:(id)a0 error:(id *)a1;

@end
