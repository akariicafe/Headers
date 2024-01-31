@class HDProfile, NSISO8601DateFormatter;

@interface HDNotificationInstructionDiagnostics : NSObject {
    HDProfile *_profile;
    NSISO8601DateFormatter *_formatter;
}

- (id)initWithProfile:(id)a0;
- (void).cxx_destruct;
- (BOOL)enumerateAllNotificationInstructionsWithError:(id *)a0 enumerationHandler:(id /* block */)a1;

@end
