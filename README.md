This is a fork of GDCM (http://gdcm.sourceforge.net/).

The repository contains several improvements to anonymization methods. 

Changelog:

1. Add `--encrypt-tag %d,%d`, so the user can choose additional tag, which will be encrypted.

2. Add `-g` or `--generate-uuids`. If the flag is set, all values  which cannot be nulled during deidentifying (i.e. Type 1 and 1C), are substituted by deterministic UUID-5 value (based on SHA-1 hash). In original GDCM implementation, these values are random UIDs. This change requires `libboost`.

3. Add `-n` or `--generate-dummy-names` to generate `PatentName`, `PatientID`, `StudyID`, `SeriesNumber`, `AccessionNumber`.  In original GDCM implementation, these values were set to empty ones.

4. Add `-s %s` or `--salt=%s`. This parameter changes the resulting UUIDs.

5. Add `-t` or `--remove-private-tags` to remove (irreversibly!) all private tags.


For a general informations related to GDCM library, please
refer to

  http://gdcm.sourceforge.net/


