@interface WFLanguagePickerMicrosoftToSystemMigration : WFWorkflowMigration

+ (BOOL)workflowNeedsMigration:(id)a0 fromClientVersion:(id)a1;

- (id)languagesSupportedByTranslation;
- (void)migrateWorkflow;
- (id)localeIdentifierFromLegacySerializedParameterValue:(id)a0;
- (id)localeIdentifierFromSerializedLocaleDisplayName:(id)a0;
- (id)localeIdentifierFromUnmigratedValue:(id)a0;
- (id)localizedLanguageDisplayNamesToLocaleIdentifiers;

@end
