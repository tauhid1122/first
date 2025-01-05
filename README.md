# Dynamic Form Configuration

This repository contains a JSON configuration for a dynamic form with multiple input types:

```json
{
    "step1": {
        "fields": [
            {
                "key": "name",
                "type": "edit_text",
                "hint": "Enter Your Name"
            },
            {
                "key": "email", 
                "type": "edit_text",
                "hint": "Enter email address"
            },
            {
                "key": "imageUpload",
                "type": "choose_image",
                "uploadButtonText": "Upload Image"
            },
            {
                "key": "location",
                "type": "gps",
                "options": [
                    {
                        "val": "0.000,0.000"
                    }
                ]
            },
            {
                "key": "city",
                "type": "spinner",
                "options": [
                    {
                        "default": true,
                        "displayText": "New York"
                    },
                    {
                        "default": false,
                        "displayText": "Los Angeles" 
                    },
                    {
                        "default": false,
                        "displayText": "Chicago"
                    }
                ]
            }
        ],
        "title": "User Information",
        "next": "step2"
    }
}
```
